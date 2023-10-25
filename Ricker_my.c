/*
 * @Author: Hzzzp
 * @Date: 2023-10-25
 * @email: hzzz507655@gmail.com
 * @website-github: https://github.com/Hzzzp
 * @LastEditTime: 2023-10-25
 */
#include <stdio.h>
#include <math.h>

double Ricker(double f,double t){
    double pi = M_PI;   //定义变量pi，存储圆周率（π）的值
    double term1 = 1-2*pi*pi*f*f*t*t;
    double term2 = exp(-pi*pi*f*f*t*t);
    return term1*term2;
}

int main()
{
    double fm = 10.0;        //中心频率
    int numPoints = 31;       //时间点数量
    double timeStep = 0.01;      //时间步长
    double t = -numPoints / 2 * timeStep;      //初始时间(对称)
    int i;

    for (i = 0;i < numPoints; i++){

    double r = Ricker(fm, t);
    printf("%f %f\n", t, r);
    t += timeStep;  //更新时间节点
    }

    return 0;
}