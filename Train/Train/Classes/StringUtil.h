#ifndef StringUtil_h_h_h_h_h_h
#define StringUtil_h_h_h_h_h_h




class StringUtil
{

public:


	////�ָ��ַ���
	static 	std::vector<std::string>split( const std::string& str, const std::string& delims);


	///ȫ��תΪСд
	static void StringUtil::toLowerCase(std::string& str);
	
	///�ϲ�תΪ��д
	static void StringUtil::toUpperCase(std::string& str);


	/**תΪ����
	*@return  ����0.0�п���ת��ʧ��
	*/
	static float  parseReal(const std::string& val);
    
	/** Converts a String to a whole number. 
	@returns
	0.0 if the value could not be parsed, otherwise the numeric version of the String.
	*/
	static int parseInt(const std::string& val);


};










#endif