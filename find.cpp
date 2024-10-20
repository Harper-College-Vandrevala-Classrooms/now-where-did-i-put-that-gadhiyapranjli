#include "find.hpp"

int find(const std::string &str, char ch) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == ch) {
            return static_cast<int>(i); 
        }
    }
    return -1; 
}

int find(const std::string &str, const std::string &subStr) {
    size_t strLength = str.length();
    size_t subStrLength = subStr.length();

    for (size_t i = 0; i <= strLength - subStrLength; ++i) {
        if (str.substr(i, subStrLength) == subStr) {
            return static_cast<int>(i); 
        }
    }
    return -1; 
}

// ********************************************************************************************************************************
// ******************************************************(One Credit) Case Sensitivity************************************************

#include "find.hpp"
#include <algorithm> 

int find(const std::string &str, char ch, bool caseSensitive) {
    for (size_t i = 0; i < str.length(); ++i) {
        char currentChar = str[i];
        if (!caseSensitive) {
            currentChar = std::tolower(currentChar);
            ch = std::tolower(ch);
        }
        if (currentChar == ch) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int find(const std::string &str, const std::string &subStr, bool caseSensitive) {
    size_t strLength = str.length();
    size_t subStrLength = subStr.length();

    for (size_t i = 0; i <= strLength - subStrLength; ++i) {
        std::string currentSubStr = str.substr(i, subStrLength);
        
        if (!caseSensitive) {
            std::transform(currentSubStr.begin(), currentSubStr.end(), currentSubStr.begin(), ::tolower);
            std::string lowerSubStr = subStr;
            std::transform(lowerSubStr.begin(), lowerSubStr.end(), lowerSubStr.begin(), ::tolower);
            if (currentSubStr == lowerSubStr) {
                return static_cast<int>(i);
            }
        } else {
            if (currentSubStr == subStr) {
                return static_cast<int>(i);
            }
        }
    }
    return -1;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//*****************************************************(Two Credits) Starting Position********************************************

#include "find.hpp"
#include <algorithm>  

int find(const std::string &str, char ch, bool caseSensitive, size_t startPos) {
    if (startPos >= str.length()) {
        return -1;  
    }

    for (size_t i = startPos; i < str.length(); ++i) {
        char currentChar = str[i];
        if (!caseSensitive) {
            currentChar = std::tolower(currentChar);
            ch = std::tolower(ch);
        }
        if (currentChar == ch) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int find(const std::string &str, const std::string &subStr, bool caseSensitive, size_t startPos) {
    size_t strLength = str.length();
    size_t subStrLength = subStr.length();

    if (startPos >= strLength) {
        return -1;  
    }

    for (size_t i = startPos; i <= strLength - subStrLength; ++i) {
        std::string currentSubStr = str.substr(i, subStrLength);
        
        if (!caseSensitive) {
            std::transform(currentSubStr.begin(), currentSubStr.end(), currentSubStr.begin(), ::tolower);
            std::string lowerSubStr = subStr;
            std::transform(lowerSubStr.begin(), lowerSubStr.end(), lowerSubStr.begin(), ::tolower);
            if (currentSubStr == lowerSubStr) {
                return static_cast<int>(i);
            }
        } else {
            if (currentSubStr == subStr) {
                return static_cast<int>(i);
            }
        }
    }
    return -1;
}

//**************************************************************************************************************************
//**************************************(Three Credits) Single Wildcard Character******************************************************


#include "find.hpp"
#include <algorithm>  
int find(const std::string &str, char ch, bool caseSensitive, size_t startPos) {
    if (startPos >= str.length()) {
        return -1;  
    }

    for (size_t i = startPos; i < str.length(); ++i) {
        char currentChar = str[i];
        if (!caseSensitive) {
            currentChar = std::tolower(currentChar);
            ch = std::tolower(ch);
        }
        if (currentChar == ch) {
            return static_cast<int>(i);
        }
    }
    return -1;
} 
int find(const std::string &str, const std::string &subStr, bool caseSensitive, size_t startPos) {
    size_t strLength = str.length();
    size_t subStrLength = subStr.length();

    if (startPos >= strLength) {
        return -1;  
    }

    for (size_t i = startPos; i < strLength; ++i) {
        size_t j = 0;  
        size_t k = i;  
        bool wildcardFound = false;

        while (j < subStrLength) {
            if (subStr[j] == '*') {
                wildcardFound = true;
                j++;  
                if (j == subStrLength) {
                    return static_cast<int>(i); 
                }
 
                while (k < strLength) {
                    if (find(str, subStr.substr(j), caseSensitive, k) != -1) {
                        return static_cast<int>(i); 
                    }
                    k++;  
                }
                return -1;  
            } else if (subStr[j] == '?') {
                
                if (k >= strLength) {
                    return -1; 
                }
                j++; 
                k++; 
            } else {
                
                if (k >= strLength) {
                    return -1; 
                }
                char currentChar = str[k];
                if (!caseSensitive) {
                    currentChar = std::tolower(currentChar);
                }
                if (currentChar != subStr[j]) {
                    break; 
                }
                j++; 
                k++; 
            }
        }

        if (j == subStrLength) {
            return static_cast<int>(i); 
        }
    }

    return -1; 
}

// // // ****************************************************************************************************************************
// // // *****************************************(Four Credits) Multiple Wildcard Characters****************************************


#include "find.hpp"
#include <algorithm> 

int find(const std::string &str, char ch, bool caseSensitive, size_t startPos) {
    if (startPos >= str.length()) {
        return -1; 
    }

    for (size_t i = startPos; i < str.length(); ++i) {
        char currentChar = str[i];
        if (!caseSensitive) {
            currentChar = std::tolower(currentChar);
            ch = std::tolower(ch);
        }
        if (currentChar == ch) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int find(const std::string &str, const std::string &subStr, bool caseSensitive, size_t startPos) {
    size_t strLength = str.length();
    size_t subStrLength = subStr.length();

    if (startPos >= strLength) {
        return -1;
    }

    for (size_t i = startPos; i < strLength; ++i) {
        size_t strIndex = i;
        size_t subIndex = 0;

        bool match = true;

        while (subIndex < subStrLength) {
            if (subStr[subIndex] == '*') {
                
                subIndex++;
                if (subIndex >= subStrLength) {
                    return static_cast<int>(i); 
                }
                
                while (strIndex < strLength) {
                    
                    if (find(str, subStr.substr(subIndex), caseSensitive, strIndex) != -1) {
                        return static_cast<int>(i); 
                    }
                    strIndex++; 
                }
                match = false; 
                break;
            } else if (subStr[subIndex] == '?') {
                
                if (strIndex >= strLength) {
                    match = false; 
                    break;
                }
                subIndex++; 
                strIndex++; 
            } else {
                
                if (strIndex >= strLength) {
                    match = false; 
                    break;
                }
                char currentChar = str[strIndex];
                if (!caseSensitive) {
                    currentChar = std::tolower(currentChar);
                }
                if (currentChar != subStr[subIndex]) {
                    match = false; 
                    break; 
                }
                subIndex++; 
                strIndex++; 
            }
        }

        if (match && subIndex == subStrLength) {
            return static_cast<int>(i); 
        }
    }

    return -1; 
}



