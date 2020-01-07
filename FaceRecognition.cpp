#include <opencv2/opencv.hpp>
#include <KL1p.h>
#include <KLab.h>
#include "armadillo"

using namespace std;
using namespace cv;
using namespace kl1p;

int main()
{
	Mat imageArray[150], image, image1;
	imageArray[0] = imread(".\\database\\001\\s1.bmp");//001
	imageArray[1] = imread(".\\database\\001\\s2.bmp");
	imageArray[2] = imread(".\\database\\001\\s3.bmp");
	imageArray[3] = imread(".\\database\\001\\s4.bmp");
	imageArray[4] = imread(".\\database\\001\\s5.bmp");
	imageArray[5] = imread(".\\database\\001\\s6.bmp");
	imageArray[6] = imread(".\\database\\001\\s7.bmp");
	imageArray[7] = imread(".\\database\\001\\s8.bmp");
	imageArray[8] = imread(".\\database\\001\\s9.bmp");
	imageArray[9] = imread(".\\database\\001\\s10.bmp");

	imageArray[10] = imread(".\\database\\002\\s12.bmp");//002
	imageArray[11] = imread(".\\database\\002\\s13.bmp");
	imageArray[12] = imread(".\\database\\002\\s14.bmp");
	imageArray[13] = imread(".\\database\\002\\s15.bmp");
	imageArray[14] = imread(".\\database\\002\\s16.bmp");
	imageArray[15] = imread(".\\database\\002\\s17.bmp");
	imageArray[16] = imread(".\\database\\002\\s18.bmp");
	imageArray[17] = imread(".\\database\\002\\s19.bmp");
	imageArray[18] = imread(".\\database\\002\\s20.bmp");
	imageArray[19] = imread(".\\database\\002\\s21.bmp");

	imageArray[20] = imread(".\\database\\003\\s23.bmp");//003
	imageArray[21] = imread(".\\database\\003\\s24.bmp");
	imageArray[22] = imread(".\\database\\003\\s25.bmp");
	imageArray[23] = imread(".\\database\\003\\s26.bmp");
	imageArray[24] = imread(".\\database\\003\\s27.bmp");
	imageArray[25] = imread(".\\database\\003\\s28.bmp");
	imageArray[26] = imread(".\\database\\003\\s29.bmp");
	imageArray[27] = imread(".\\database\\003\\s30.bmp");
	imageArray[28] = imread(".\\database\\003\\s31.bmp");
	imageArray[29] = imread(".\\database\\003\\s32.bmp");

	imageArray[30] = imread(".\\database\\004\\s34.bmp");//004
	imageArray[31] = imread(".\\database\\004\\s35.bmp");
	imageArray[32] = imread(".\\database\\004\\s36.bmp");
	imageArray[33] = imread(".\\database\\004\\s37.bmp");
	imageArray[34] = imread(".\\database\\004\\s38.bmp");
	imageArray[35] = imread(".\\database\\004\\s39.bmp");
	imageArray[36] = imread(".\\database\\004\\s40.bmp");
	imageArray[37] = imread(".\\database\\004\\s41.bmp");
	imageArray[38] = imread(".\\database\\004\\s42.bmp");
	imageArray[39] = imread(".\\database\\004\\s43.bmp");

	imageArray[40] = imread(".\\database\\005\\s45.bmp");//005
	imageArray[41] = imread(".\\database\\005\\s46.bmp");
	imageArray[42] = imread(".\\database\\005\\s47.bmp");
	imageArray[43] = imread(".\\database\\005\\s48.bmp");
	imageArray[44] = imread(".\\database\\005\\s49.bmp");
	imageArray[45] = imread(".\\database\\005\\s50.bmp");
	imageArray[46] = imread(".\\database\\005\\s51.bmp");
	imageArray[47] = imread(".\\database\\005\\s52.bmp");
	imageArray[48] = imread(".\\database\\005\\s53.bmp");
	imageArray[49] = imread(".\\database\\005\\s54.bmp");

	imageArray[50] = imread(".\\database\\006\\s56.bmp");//006
	imageArray[51] = imread(".\\database\\006\\s57.bmp");
	imageArray[52] = imread(".\\database\\006\\s58.bmp");
	imageArray[53] = imread(".\\database\\006\\s59.bmp");
	imageArray[54] = imread(".\\database\\006\\s60.bmp");
	imageArray[55] = imread(".\\database\\006\\s61.bmp");
	imageArray[56] = imread(".\\database\\006\\s62.bmp");
	imageArray[57] = imread(".\\database\\006\\s63.bmp");
	imageArray[58] = imread(".\\database\\006\\s64.bmp");
	imageArray[59] = imread(".\\database\\006\\s65.bmp");

	imageArray[60] = imread(".\\database\\007\\s67.bmp");//007
	imageArray[61] = imread(".\\database\\007\\s68.bmp");
	imageArray[62] = imread(".\\database\\007\\s69.bmp");
	imageArray[63] = imread(".\\database\\007\\s70.bmp");
	imageArray[64] = imread(".\\database\\007\\s71.bmp");
	imageArray[65] = imread(".\\database\\007\\s72.bmp");
	imageArray[66] = imread(".\\database\\007\\s73.bmp");
	imageArray[67] = imread(".\\database\\007\\s74.bmp");
	imageArray[68] = imread(".\\database\\007\\s75.bmp");
	imageArray[69] = imread(".\\database\\007\\s76.bmp");


	imageArray[70] = imread(".\\database\\008\\s78.bmp");//008
	imageArray[71] = imread(".\\database\\008\\s79.bmp");
	imageArray[72] = imread(".\\database\\008\\s80.bmp");
	imageArray[73] = imread(".\\database\\008\\s81.bmp");
	imageArray[74] = imread(".\\database\\008\\s82.bmp");
	imageArray[75] = imread(".\\database\\008\\s83.bmp");
	imageArray[76] = imread(".\\database\\008\\s84.bmp");
	imageArray[77] = imread(".\\database\\008\\s85.bmp");
	imageArray[78] = imread(".\\database\\008\\s86.bmp");
	imageArray[79] = imread(".\\database\\008\\s87.bmp");

	imageArray[80] = imread(".\\database\\009\\s89.bmp");//009
	imageArray[81] = imread(".\\database\\009\\s90.bmp");
	imageArray[82] = imread(".\\database\\009\\s91.bmp");
	imageArray[83] = imread(".\\database\\009\\s92.bmp");
	imageArray[84] = imread(".\\database\\009\\s93.bmp");
	imageArray[85] = imread(".\\database\\009\\s94.bmp");
	imageArray[86] = imread(".\\database\\009\\s95.bmp");
	imageArray[87] = imread(".\\database\\009\\s96.bmp");
	imageArray[88] = imread(".\\database\\009\\s97.bmp");
	imageArray[89] = imread(".\\database\\009\\s98.bmp");

	imageArray[90] = imread(".\\database\\010\\s100.bmp");//010
	imageArray[91] = imread(".\\database\\010\\s101.bmp");
	imageArray[92] = imread(".\\database\\010\\s102.bmp");
	imageArray[93] = imread(".\\database\\010\\s103.bmp");
	imageArray[94] = imread(".\\database\\010\\s104.bmp");
	imageArray[95] = imread(".\\database\\010\\s105.bmp");
	imageArray[96] = imread(".\\database\\010\\s106.bmp");
	imageArray[97] = imread(".\\database\\010\\s107.bmp");
	imageArray[98] = imread(".\\database\\010\\s108.bmp");
	imageArray[99] = imread(".\\database\\010\\s109.bmp");

	imageArray[100] = imread(".\\database\\011\\s111.bmp");//011
	imageArray[101] = imread(".\\database\\011\\s112.bmp");
	imageArray[102] = imread(".\\database\\011\\s113.bmp");
	imageArray[103] = imread(".\\database\\011\\s114.bmp");
	imageArray[104] = imread(".\\database\\011\\s115.bmp");
	imageArray[105] = imread(".\\database\\011\\s116.bmp");
	imageArray[106] = imread(".\\database\\011\\s117.bmp");
	imageArray[107] = imread(".\\database\\011\\s118.bmp");
	imageArray[108] = imread(".\\database\\011\\s119.bmp");
	imageArray[109] = imread(".\\database\\011\\s120.bmp");

	imageArray[110] = imread(".\\database\\012\\s122.bmp");//012
	imageArray[111] = imread(".\\database\\012\\s123.bmp");
	imageArray[112] = imread(".\\database\\012\\s124.bmp");
	imageArray[113] = imread(".\\database\\012\\s125.bmp");
	imageArray[114] = imread(".\\database\\012\\s126.bmp");
	imageArray[115] = imread(".\\database\\012\\s127.bmp");
	imageArray[116] = imread(".\\database\\012\\s128.bmp");
	imageArray[117] = imread(".\\database\\012\\s129.bmp");
	imageArray[118] = imread(".\\database\\012\\s130.bmp");
	imageArray[119] = imread(".\\database\\012\\s131.bmp");

	imageArray[120] = imread(".\\database\\013\\s133.bmp");//013
	imageArray[121] = imread(".\\database\\013\\s134.bmp");
	imageArray[122] = imread(".\\database\\013\\s135.bmp");
	imageArray[123] = imread(".\\database\\013\\s136.bmp");
	imageArray[124] = imread(".\\database\\013\\s137.bmp");
	imageArray[125] = imread(".\\database\\013\\s138.bmp");
	imageArray[126] = imread(".\\database\\013\\s139.bmp");
	imageArray[127] = imread(".\\database\\013\\s140.bmp");
	imageArray[128] = imread(".\\database\\013\\s141.bmp");
	imageArray[129] = imread(".\\database\\013\\s142.bmp");

	imageArray[130] = imread(".\\database\\014\\s144.bmp");//014
	imageArray[131] = imread(".\\database\\014\\s145.bmp");
	imageArray[132] = imread(".\\database\\014\\s146.bmp");
	imageArray[133] = imread(".\\database\\014\\s147.bmp");
	imageArray[134] = imread(".\\database\\014\\s148.bmp");
	imageArray[135] = imread(".\\database\\014\\s149.bmp");
	imageArray[136] = imread(".\\database\\014\\s150.bmp");
	imageArray[137] = imread(".\\database\\014\\s151.bmp");
	imageArray[138] = imread(".\\database\\014\\s152.bmp");
	imageArray[139] = imread(".\\database\\014\\s153.bmp");

	imageArray[140] = imread(".\\database\\015\\s155.bmp");//015
	imageArray[141] = imread(".\\database\\015\\s156.bmp");
	imageArray[142] = imread(".\\database\\015\\s157.bmp");
	imageArray[143] = imread(".\\database\\015\\s158.bmp");
	imageArray[144] = imread(".\\database\\015\\s159.bmp");
	imageArray[145] = imread(".\\database\\015\\s160.bmp");
	imageArray[146] = imread(".\\database\\015\\s161.bmp");
	imageArray[147] = imread(".\\database\\015\\s162.bmp");
	imageArray[148] = imread(".\\database\\015\\s163.bmp");
	imageArray[149] = imread(".\\database\\015\\s164.bmp");

	int i, j, k, g;
	double sum;
	int CompressNum = 500;//压缩后向量50

	arma::Mat<klab::DoubleReal> A(10000, 150);
	arma::Mat<klab::DoubleReal> A1(500, 150);
	arma::Col<klab::DoubleReal> Y(10000);
	arma::Col<klab::DoubleReal> Y1(500);
	arma::Col<klab::DoubleReal> W(650);
	arma::Mat<klab::DoubleReal> R(500, 10000);
	arma::Mat<klab::DoubleReal> B(500, 650);
	arma::Col<klab::DoubleReal> x1(150);
	arma::Col<klab::DoubleReal> e1(500);

	int temp;
	srand((int)time(0));//设置随机数种子，使每次获取的随机序列不同。
	for (i = 0; i<CompressNum; i++)//压缩感知测量矩阵（50*5625）
	{
		for (j = 0; j < 10000; j++)
		{
			temp = rand() % 6;
			if (temp == 0)
				R(i, j) = sqrt(3);
			else if (temp == 1)
				R(i, j) = -1 * sqrt(3);
			else
				R(i, j) = 0;
		}
	}
	//cout << R << endl;
	for (g = 0; g<150; g++)              //赋值B矩阵
	{
		image = imageArray[g];
		if (image.channels() == 3)
		{
			//若是多通道彩色图，则把图片转换为单通道灰色图
			cvtColor(image, image1, CV_BGR2GRAY);
			if (image1.channels() == 1)
				image1.copyTo(image);
		}
		sum = 0;
		for (i = 0; i<image.cols; i++) {
			for (j = 0; j<image.rows; j++) {
				sum = sum + image.at<uchar>(j, i)*image.at<uchar>(j, i);
			}
		}
		sum = sqrt(sum);

		k = 0;
		for (i = 0; i<image.cols; i++) {
			for (j = 0; j<image.rows; j++) {
				A(k++, g) = image.at<uchar>(j, i) / sum;
			}
		}
	}
	//cout << A << endl;
	A1 = R*A;//A1(500,150)  R(500,20139)  A(20139,150)
	//cout << A1 << endl;

	for (i = 0; i<150; i++)
	{
		sum = 0;
		for (j = 0; j<500; j++)
		{
			sum = sum + A1(j, i)*A1(j, i);
		}
		sum = sqrt(sum);
		for (j = 0; j<500; j++)
		{
			A1(j, i) = A1(j, i) / sum;
		}
	}

	for (i = 0; i<500; i++)
	{
		for (j = 0; j<150; j++)
			B(i, j) = A1(i, j);
		for (; j<650; j++)
		{
			if (j == i + 500)
				B(i, j) = 1;
			B(i, j) = 0;
		}
	}//B(500,650)
	//cout << B;

	Mat imageTest[15];
	imageTest[0] = imread(".\\database\\001\\s11.bmp");
	imageTest[1] = imread(".\\database\\002\\s22.bmp");
	imageTest[2] = imread(".\\database\\003\\s33.bmp");
	imageTest[3] = imread(".\\database\\004\\s44.bmp");
	imageTest[4] = imread(".\\database\\005\\s55.bmp");
	imageTest[5] = imread(".\\database\\006\\s66.bmp");
	imageTest[6] = imread(".\\database\\007\\s77.bmp");
	imageTest[7] = imread(".\\database\\008\\s88.bmp");
	imageTest[8] = imread(".\\database\\009\\s99.bmp");
	imageTest[9] = imread(".\\database\\010\\s110.bmp");
	imageTest[10] = imread(".\\database\\011\\s121.bmp");
	imageTest[11] = imread(".\\database\\012\\s132.bmp");
	imageTest[12] = imread(".\\database\\013\\s143.bmp");
	imageTest[13] = imread(".\\database\\014\\s154.bmp");
	imageTest[14] = imread(".\\database\\015\\s165.bmp");
	int o;

	for (o = 0; o<15; o++) {
		k = 0;
		image = imageTest[o];   //赋值Y矩阵
								//image = imread("database\\001\\02.jpg"); 
		if (image.channels() == 3)
		{
			//若是多通道彩色图，则把图片转换为单通道灰色图
			Mat image1;
			cvtColor(image, image1, CV_BGR2GRAY);
			if (image1.channels() == 1)
				image1.copyTo(image);
		}
		sum = 0;
		for (i = 0; i<image.cols; i++) {
			for (j = 0; j<image.rows; j++) {
				sum = sum + image.at<uchar>(j, i)*image.at<uchar>(j, i);
			}
		}
		sum = sqrt(sum);
		for (i = 0; i<image.cols; i++) {
			for (j = 0; j<image.rows; j++) {
				Y(k++) = image.at<uchar>(j, i) / sum;
			}
		}

		Y1 = R*Y;//Y1(500,1)  R(500,20139)  Y(20139,1)

		sum = 0;
		for (j = 0; j<500; j++)
		{
			sum = sum + Y1(j, 0)*Y1(j, 0);
		}
		sum = sqrt(sum);
		for (j = 0; j<500; j++)
		{
			Y1(j, 0) = Y1(j, 0) / sum;
		}

		kl1p::TMatrixOperator<klab::DoubleReal> * matrix = new kl1p::TMatrixOperator<klab::DoubleReal>(B);
		klab::TSmartPointer<kl1p::TOperator<klab::DoubleReal, klab::DoubleReal> > * B1 = new klab::TSmartPointer<kl1p::TOperator<klab::DoubleReal, klab::DoubleReal> >(matrix);

		klab::DoubleReal tolerance = 1e1;	// Tolerance of the solution.
		kl1p::TBasisPursuitSolver<klab::DoubleReal> bp(tolerance);
		bp.solve(Y1, *B1, W);

		for (i = 0; i<150; i++)
			x1(i) = W(i);
		for (; i<650; i++)
			e1(i - 150) = W(i);
		Y1 = Y1 - e1;

		double r[15];
		arma::Col<klab::DoubleReal> l(150);
		arma::Col<klab::DoubleReal> l1(500);
		for (i = 0; i<15; i++)
		{
			sum = 0;
			for (j = 0; j<150; j++)
				l(j) = 0;
			for (j = i * 10; j<i * 10 + 10; j++)
				l(j) = x1(j);
			l1 = Y1 - A1*l;
			for (j = 0; j<500; j++)
				sum = sum + l1(j)*l1(j);
			sum = sqrt(sum);
			//cout << sum << endl;
			r[i] = sum;
			//cout<<sum<<endl;
		}
		double  min = r[0];
		int min_num = 0;
		for (i = 0; i<15; i++)
		{
			if (r[i]<min)
			{
				min = r[i];
				//cout << min << endl;
				min_num = i;
			}
		}
		cout << "第" << o + 1 << "张图片与第" << min_num + 1 << "人的脸匹配" << endl;

		double sci, sum1 = 0, sum2 = 0, sum1_max = 0;
		for (i = 0; i<15; i++)
		{
			sum1 = 0;
			for (j = 0; j<10; j++)
				sum1 = sum1 + abs(x1(i * 10 + j));
			if (sum1>sum1_max)
				sum1_max = sum1;
		}
		for (i = 0; i<150; i++)
			sum2 = sum2 + abs(x1(i));
		sci = (sum1_max * 15 / sum2 - 1) / 14;
		cout << "SCI为" << sci << endl;

	}
	system("pause");
	return 0;
}