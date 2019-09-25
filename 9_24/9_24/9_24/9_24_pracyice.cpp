#include<iostream>
#include<string.h>
using namespace std;

#if 0
	//float Cut_image(Mat src_img, float c)      //Í¼Æ¬²Ã³É×óÓÒÁ½°ë
	//{

		Mat dstImg1, dstImg2;
		int height = src_img.rows;
		int width = src_img.cols;
		int ceil_height = height;
		int ceil_width = width / 2;
		Rect rect(0, 0, ceil_width, ceil_height);
		dstImg1 = src_img(rect);
		Rect rect1(ceil_width, 0, ceil_width, ceil_height);
		dstImg2 = src_img(rect1);
		HistCal(dstImg1, hist1);
		HistCal(dstImg2, hist2);



double  test01()
{

	double   hist1 = 6.6;

	double   hist2 = 3.3;

	double    c = 0;

		if (hist1 > hist2)
		{
			c = hist2 / hist1;
		}
		else
		{
			c = hist1 / hist2;
		}
		return c;
	}

#endif



void test01()
{

}


int main()
{
	
	test01();


	cout << a << endl;
	system("pause");
	return 0;

}