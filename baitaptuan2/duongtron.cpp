#include"toan cap 1.h"


float TinhChuviHCN(float dai, float rong)
{
	float cv = (dai + rong) * 2;
	return cv;
}
float TinhDientichHCN(float dai, float rong)
{
	float dt = dai * rong;
	return dt;
}
float TinhChuviVuong(float canh)
{
	float cvhv = canh * 4;
	return cvhv;
}
float TinhDientichVuong(float canh)
{
	float dthv = canh * canh;
	return dthv;
}
float TinhChuviTron(float r)
{
	float cvht = (2 * r) * 3.14;
	return cvht;
}
float TinhDientichTron(float r)
{
	float dtht = (r * r) * 3.14;
	return dtht;
}