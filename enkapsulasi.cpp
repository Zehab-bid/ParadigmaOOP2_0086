#include <iostream>
using namespace std;

class remoteLampu {
private:
    string SaklarNo[10];
public: 
    void setSaklarNo(int i, string value) {
        SaklarNo[i] = value;
    }
    string getsaklarNo(int i){
        return SaklarNo[i];
    }
};

int main() {
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "lampu teras rumah");
    lampuRumah.setSaklarNo(1, "lampu ruang tamu");
    lampuRumah.setSaklarNo(2, "lampu kamar tidur");
    lampuRumah.setSaklarNo(3, "lampu daput");    

    
}