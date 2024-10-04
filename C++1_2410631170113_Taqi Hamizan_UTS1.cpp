#include<iostream>
using namespace std;
int main()
{
int npm, present, work, mid, fin, ave;
string name;
cout << "Masukan Nama : ";
cin >> name;
cout << "Masukan NPM : ";
cin >> npm;
cout << "Masukan Nilai Absen : ";
cin >> present;
cout << "Masukan Nilai Tugas : ";
cin >> work;
cout << "Masukan Nilai UTS : ";
cin >> mid;
cout << "Masukan Nilai UAS : ";
cin >> fin;
cout << "Nama : " << name << endl;
cout << "NPM : " << npm << endl;
cout << "Nilai Absen : " << present << endl;
cout << "Nilai Tugas : " << work << endl;
cout << "Nilai UTS : " << mid << endl;
cout << "Nilai UAS : " << fin << endl;
cout << "Nilai Akhir = " << ((present / 10) + (work / 5) + (mid * 3 / 10) + (fin * 2 / 5)) << endl;
ave=((present / 10) + (work / 5) + (mid * 3 / 10) + (fin * 2 / 5));

if (ave>=85)
{
    cout << "Nilai Mutu = A" << endl;
}
else if (ave>=80)
{
    cout << "Nilai Mutu = B" << endl;
}
else if (ave>=75)
{
    cout << "Nilai Mutu = C" << endl;
}
else if (ave>=70)
{
    cout << "Nilai Mutu = D" << endl;
}
else
{
    cout << "Nilai Mutu = E" << endl;
}

return 0;
}
