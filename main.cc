#include <iostream>
using namespace std;

#include <opencv2/opencv.hpp>
using namespace cv;

int main(){
    cout << "opencv test" << endl;
    //Mat image = imread("./output.jpg");
    Mat image = imread("./lena.jpg");
    //Mat image(500, 500, CV_8UC1);
    cout << image.cols << "x" << image.rows << endl;
    //imwrite("./output.jpg", image);
    return -1;
};
