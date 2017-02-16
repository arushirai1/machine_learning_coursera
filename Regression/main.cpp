#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
int main() {
	//gaussian blur parameters
	int ksize = 7;
	int sigmaX = 25;
	int sigmaY = 25;

	Mat src = imread("TestPictures/IMG_20160605_204013.jpg", 1);

	cv::GaussianBlur(*src, *src, 
					  ksize, sigmaX, sigmaY, cv::BORDER_DEFAULT)
	return 0;
}