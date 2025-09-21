#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

    cout << hex << setw(0) << setiosflags(ios::showbase) << resetiosflags(ios::uppercase);
    cout << (long long)A << endl;

    cout << right << setfill('_') << setw(15) << setprecision(2) << fixed << setiosflags(ios::showpos);
    cout << B << endl;

    cout << resetiosflags(ios::showpos) << setiosflags(ios::uppercase) << setprecision(9) << scientific;
    cout << C << endl;
    
	}
	return 0;
}