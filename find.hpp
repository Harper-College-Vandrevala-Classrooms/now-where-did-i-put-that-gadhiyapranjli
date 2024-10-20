#include <string>
int find(const std::string &str, char ch);
int find(const std::string &str, const std::string &subStr);

// ********************************************************************************************************************************
// ******************************************************(One Credit) Case Sensitivity************************************************

#ifndef FIND_HPP
#define FIND_HPP

#include <string>

int find(const std::string &str, char ch, bool caseSensitive = true);
int find(const std::string &str, const std::string &subStr, bool caseSensitive = true);

#endif 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//*****************************************************(Two Credits) Starting Position********************************************


#ifndef FIND_HPP
#define FIND_HPP

#include <string>

int find(const std::string &str, char ch, bool caseSensitive = true, size_t startPos = 0);
int find(const std::string &str, const std::string &subStr, bool caseSensitive = true, size_t startPos = 0);

#endif 

//**************************************************************************************************************************
//**************************************(Three Credits) Single Wildcard Character******************************************************


#ifndef FIND_HPP
#define FIND_HPP

#include <string>

int find(const std::string &str, char ch, bool caseSensitive = true, size_t startPos = 0);
int find(const std::string &str, const std::string &subStr, bool caseSensitive = true, size_t startPos = 0);

#endif 

// //****************************************************************************************************************************
// //*****************************************(Four Credits) Multiple Wildcard Characters****************************************


#ifndef FIND_HPP
#define FIND_HPP

#include <string>


int find(const std::string &str, char ch, bool caseSensitive = true, size_t startPos = 0);
int find(const std::string &str, const std::string &subStr, bool caseSensitive = true, size_t startPos = 0);

#endif 


