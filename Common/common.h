
/*********************************************************************************
*Copyright(C),2010-2011
*FileName:		//common.h
*Author:		//shijie
*Version:		//1.0
*Date:			//2018/6/2 22:14
*Description:	//常用一些宏定义，内联函数
**********************************************************************************/
#ifndef _COMMON_H_
#define _COMMON_H_
#include <math.h>

//字符串最大长度
const int MAXSTRING = 2048;

#define MACRO_RETURN_IF(expr) if(expr){return;}
#define MACRO_RETURN_TRUE_IF(expr) if(expr){return true;}
#define MACRO_RETURN_FALSE_IF(expr) if(expr){return false;}
#define MACRO_BREAK_IF(expr) if(expr){break;}
#define MACRO_CONTINUE_IF(expr) if(expr){continue;}

//Double判0
inline bool IsDoubleZero(const double& d)
{
	if (fabs(d) < 1e-15)
		return true;
	return false;
}

#endif //_COMMON_H_