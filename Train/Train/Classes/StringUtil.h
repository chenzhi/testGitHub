#ifndef StringUtil_h_h_h_h_h_h
#define StringUtil_h_h_h_h_h_h




class StringUtil
{

public:


	////分割字符串
	static 	std::vector<std::string>split( const std::string& str, const std::string& delims);


	///全部转为小写
	static void StringUtil::toLowerCase(std::string& str);
	
	///合部转为大写
	static void StringUtil::toUpperCase(std::string& str);


	/**转为浮点
	*@return  返回0.0有可能转变失败
	*/
	static float  parseReal(const std::string& val);
    
	/** Converts a String to a whole number. 
	@returns
	0.0 if the value could not be parsed, otherwise the numeric version of the String.
	*/
	static int parseInt(const std::string& val);


};










#endif