#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
	Mat image = Mat(600, 800, CV_8UC3, Scalar(0, 0, 0));

	circle(image, Point(100, 100), 60, Scalar(255, 0, 0), 3);

	imshow("Image", image);
	waitKey(0);
	return 0;
}