// UjianAkhir.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class masukuniversitas {
private:
    int uangpendaftaran;
    int uangsemesterpertama;
    int uangbangunan;
    int totalbiaya;
    int SNBP;
    int SNBT;

public:
    masukuniversitas() {
        uangpendaftaran = 0;
        
    }
    virtual void namajalurmasuk() { return; }
    string SNBT;
    string SNBP;


    void setuangpendaftaran(int nilai, string mahal, string sedang) {
        this->uangpendaftaran = nilai;
    }
    float getuangpendaftaran() {
        return uangpendaftaran;
    }

    void settotalbiaya(string uangpendaftran, string uanngsemesterpertama, string uangbangunan) {
       ( totalbiaya = uangpendaftaran + uangsemesterpertama + uangbangunan);
    }

    void display() {
        cout << "totalbiaya =" << totalbiaya << endl;
    }

    void rekomendasi(string mahal, string sedang, string tidakrekomendasi,string dipertimbangkan ) {
        mahal = tidakrekomendasi;
        sedang = dipertimbangkan;
    }
    void display() {
        cout << "" << endl;
        cout << "" << endl;
    }



};



class SNBT :public masukuniversitas {
public:
    SNBT(int uangpendaftaran, int uangsemesterpertama, int uangbanguana) :
        masukuniversitas()
    {
        cout << "masukan uang pendaftaran\n" << endl;
        cout << "masukan uang semester pertama\n" << endl;
        cout << "masukan uang bagunana\n" << endl;
    }
    
};

class SNBP : public masukuniversitas {
    SNBP( int uangpendaftaran, int uangsemesterpertama, int uangbanguana) :
        masukuniversitas()
    {
        cout << "masukan uang pendaftaran\n" << endl;
        cout << "masukan uang semester pertama\n" << endl;
        cout << "masukan uang bagunana\n" << endl;
    }
};

int main()
{
    masukuniversitas biaya;

    biaya.setuangpendaftaran();
    biaya.setuangpendaftaran();

    cout << biaya.getuangpendaftaran(0) << endl;
    cout << biaya.getuangpendaftaran(1) << endl;

    masukuniversitas ak;
    ak.settotalbiaya();
    ak.display();
}


