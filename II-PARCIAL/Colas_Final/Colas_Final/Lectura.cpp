/*Fecha creacion: 05/07/2021
Fecha modificacion: 05/07/2021*/
#include "Lectura.h"
#include "windows.h"
#include<stdlib.h>
#include <iostream>
#include <string>
#include<fstream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;

/**
 * La función "lecuraImagen" hace la lectura del membrete de nuestro proyecto, leyendo el código ascci insertado
 */
void Lectura::lectura_Imagen()
{
    std::ifstream archivo;
    std::string texto;
    archivo.open("Membrete.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) {
        std::getline(archivo, texto);
        cout << texto << endl;

    }
    archivo.close();
}
void Lectura::membrete() {
	const char* ascii_char = "$@B%8&WM#*pqrsbdpqwmZO0QLCJUYXzcvunxrjft/\|()1{}[]?-_+~<>i!lI;:,\"^`'. ";
	float unit = 3.724637681;
	Mat dirImg = imread("images.jpg", 0);
	Mat tamImg;
	string txt;
	resize(dirImg, tamImg, Size(100, 50));
	int numeroFilas = tamImg.rows;
	int numeroColumnas = tamImg.cols;
	for (int i = 0; i < numeroFilas; i++) {
		for (int j = 0; j < numeroColumnas; j++)
			txt += *(ascii_char + int((tamImg.at<uchar>(i, j)) / unit));
		txt += '\n';
	}
	ofstream file;
	file.open("Membrete.txt");
	if (file.is_open())
		file << txt;
	file.close();
}
