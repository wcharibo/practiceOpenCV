#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
	Mat image;
	image = imread("c:/photo/aimyonAtKosien.png", IMREAD_COLOR);
	if (image.empty()) {
		cout << "Can't read image" << endl;
	}
	imshow("output image", image);
	waitKey(0);
	return 0;
}

