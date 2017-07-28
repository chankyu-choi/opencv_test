#include <iostream>
using namespace std;

#include <opencv2/opencv.hpp>
using namespace cv;

int main(){
    cout << "opencv test" << endl;
    Mat image = imread("./lena.jpg");
    cout << image.cols << "x" << image.rows << endl;
    return -1;
};
