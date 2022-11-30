
#include <iostream>
using namespace std;
#include"Box.h"

int main()
{
	float width;
	float height;
	float depth;
	float surface;
	float volume;

	cout << "幅を入力:";
	cin >> width;
	cout << "高さを入力:";
	cin >> height;
	cout << "奥行きを入力:";
	cin >> depth;

	Box *box =new Box(width, height, depth);
	
	surface = box->GetSurface();
	volume = box->GetVolume();

	cout << "表面積は" << surface << endl;
	cout << "体積は" << volume << endl;
}
