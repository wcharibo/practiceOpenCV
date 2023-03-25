#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void onMouse(int event, int x, int y, int flags, void* param) {
	if (event == EVENT_LBUTTONDOWN) {
		Mat& img = *(Mat*)(param);
		circle(img, Point(x, y), 100, Scalar(0, 255, 0), 10);
		imshow("src", img);
	}
	else if (event == EVENT_RBUTTONDOWN) {
		Mat& img = *(Mat*)(param);
		rectangle(img, Point(x, y), Point(100 + x, 100 + y), Scalar(0, 255, 0), 5);
		imshow("src", img);
	}
	else if(event == EVENT_MBUTTONDOWN){}
	else if(event == EVENT_MOUSEMOVE){}
}

int main() {
	Mat src = Mat(600, 800, CV_8UC3, Scalar(0, 0, 0));
	if (src.empty()) { cout << "image is empty"<<endl ; }

	imshow("Image", src);

	setMouseCallback("Image", onMouse, &src);

	waitKey(0);
	return 0;
}