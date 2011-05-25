//#include "pch.h"
#include <string>
#include <vector>
#include <sstream>
#include "StringUtil.h"




std::vector<std::string> StringUtil::split( const std::string& str, const std::string& delims)
{
	std::vector<std::string> stringlist;
	
	size_t start, pos;
	start = 0;
	do 
	{
		pos = str.find_first_of(delims, start);
		if (pos == start)
		{
			// Do nothing
			start = pos + 1;
		}
		else if (pos == std::string	::npos )
		{
			// Copy the rest of the string
			stringlist.push_back( str.substr(start) );
			break;
		}
		else
		{
			// Copy up to delimiter
			stringlist.push_back( str.substr(start, pos - start) );
			start = pos + 1;
		}
		// parse up to next real data
		start = str.find_first_not_of(delims, start);
		

	} while (pos != std::string	::npos);

	return stringlist;


}

//-----------------------------------------------------------------------
void StringUtil::toLowerCase(std::string& str)
{
	std::transform(
		str.begin(),
		str.end(),
		str.begin(),
		tolower);
}

//-----------------------------------------------------------------------
void StringUtil::toUpperCase(std::string& str) 
{
	std::transform(
		str.begin(),
		str.end(),
		str.begin(),
		toupper);
}


//-----------------------------------------------------------------------
float   StringUtil::parseReal(const std::string& val)
{
	std::stringstream str(val);
	float  ret = 0;
	str >> ret;
	return ret;

}

//-----------------------------------------------------------------------
int  StringUtil::parseInt(const std::string& val)
{
	std::stringstream str(val);
	int ret = 0;
	str >> ret;
	return ret;

}
