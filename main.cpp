#include <iostream>
#include "find.hpp"

using namespace std;

int main() {
    string inputString = "The quick brown fox";

    cout << "Input String\t\tSearch Query Returns Search Query Type" << endl;
    cout << "\"" << inputString << "\"\t\'e'\t\t" <<    find(inputString,'e') << "\tchar" << endl;
    cout << "\"" << inputString << "\"\t\"e\" \t\t" << find(inputString,   "e") << "\tstring" << endl;
    cout << "\"" << inputString << "\"\t\' '\t\t" << find(inputString,  ' ') << "\tchar" << endl;
    cout << "\"" << inputString << "\"\t\"quick\"\t\t" << find(inputString, "quick") << "\tstring" << endl;
    cout << "\"" << inputString << "\"\t\"quiet\"\t\t" << find(inputString, "quiet") << "\tstring" << endl;

    return 0;
}


//********************************************************************************************************************************
//******************************************************(One Credit) Case Sensitivity*********************************************************************

#include <iostream>
#include "find.hpp"

using namespace std;

int main() {
    string inputString = "The quick brown fox";

    cout << "Input String\t\tSearch Query Returns Search Query Type" << endl;

    cout << "\"" << inputString << "\"\t\'e'\t\t" << find(inputString, 'e') << "\tchar (case-sensitive)" << endl;
    cout << "\"" << inputString << "\"\t\"e\"\t\t" << find(inputString, "e") << "\tstring (case-sensitive)" << endl;
    cout << "\"" << inputString << "\"\t\'E'\t\t" << find(inputString, 'E', false) << "\tchar (case-insensitive)" << endl;
    cout << "\"" << inputString << "\"\t\"QUICK\"\t\t" << find(inputString, "QUICK", false) << "\tstring (case-insensitive)" << endl;
    cout << "\"" << inputString << "\"\t\' '\t\t" << find(inputString, ' ') << "\tchar (case-sensitive)" << endl;
    cout << "\"" << inputString << "\"\t\"quick\"\t\t" << find(inputString, "quick") << "\tstring (case-sensitive)" << endl;
    cout << "\"" << inputString << "\"\t\"quiet\"\t\t" << find(inputString, "quiet") << "\tstring (case-sensitive)" << endl;

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//*****************************************************(Two Credits) Starting Position********************************************


#include <iostream>
#include "find.hpp"

using namespace std;

int main() {
    string inputString = "The quick brown fox";

    cout << "Input String\t\tSearch Query\tSpecified Starting Position\tReturns\tSearch Query Type" << endl;

    
    cout << "\"" << inputString << "\"\t\'e\'\t\tNone Specified\t\t\t" << find(inputString, 'e') << "\tchar" << endl;
    cout << "\"" << inputString << "\"\t\'e\'\t\t0\t\t\t\t" << find(inputString, 'e', true, 0) << "\tchar" << endl;
    cout << "\"" << inputString << "\"\t\'e\'\t\t1\t\t\t\t" << find(inputString, 'e', true, 1) << "\tchar" << endl;
    cout << "\"" << inputString << "\"\t\'e\'\t\t2\t\t\t\t" << find(inputString, 'e', true, 2) << "\tchar" << endl;
    cout << "\"" << inputString << "\"\t\'e\'\t\t3\t\t\t\t" << find(inputString, 'e', true, 3) << "\tchar" << endl;
    cout << "\"" << inputString << "\"\t\'e\'\t\t500\t\t\t\t" << find(inputString, 'e', true, 500) << "\tchar" << endl;

    

    return 0;
}

//**************************************************************************************************************************
//**************************************(Three Credits) Single Wildcard Character************************************************************************************

#include <iostream>
#include "find.hpp"

using namespace std;

int main() {
    cout << "Input String\t\tSearch Query\tReturns\tSearch Query Type" << endl;

    cout << "\"lamb\"\t\t\t\t\"*mb\"\t\t" << find("lamb", "*mb") << "\tstring" << endl; 
    cout << "\"pits\"\t\t\t\t\"*s\"\t\t" << find("pits", "*s") << "\tstring" << endl; 
    cout << "\"yellow\"\t\t\t\"y*l\"\t\t" << find("yellow", "y*l") << "\tstring" << endl; 
    cout << "\"that’s why I like milk\"\t\"y*l\"\t\t" << find("that’s why I like milk", "y*l") << "\tstring" << endl; 
    cout << "\"dumb\"\t\t\t\t\"*d\"\t\t" << find("dumb", "*d") << "\tstring" << endl; 
    cout << "\"dumb\"\t\t\t\t\"b*\"\t\t" << find("dumb", "b*") << "\tstring" << endl; 

    return 0;
}

// //****************************************************************************************************************************
// //*****************************************(Four Credits) Multiple Wildcard Characters****************************************


#include <iostream>
#include "find.hpp"

using namespace std;

int main() {
    cout << "Input String\tSearch Query\tReturns\tSearch Query Type" << endl;

    
    cout << "\"dumb bunnies\"\t\"*bunnies\"\t" << find("dumb bunnies", "*bunnies") << "\tstring" << endl; 
    cout << "\"dumb bunnies\"\t\"b*b*n\"\t\t" << find("dumb bunnies", "b*b*n") << "\tstring" << endl; 
    cout << "\"dumb bunnies\"\t\"b*n*n\"\t\t" << find("dumb bunnies", "b*n*n") << "\tstring" << endl; 
    cout << "\"dumb bunnies\"\t\"u*n*n\"\t\t" << find("dumb bunnies", "u*n*n") << "\tstring" << endl; 

    return 0;
}

