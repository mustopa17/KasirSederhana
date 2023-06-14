#include <iostream>
#include <array>
#include <string>
#include <ctime>

using namespace std;

int jmlbeli ;
void pembatas(){
    cout << "=========================================="<< endl;
}

int main()
{

array<string,  5>stokbarang{ "", "SUSU", "FRISIANFLAG" ,"SPRITE 390ML" ,"WLS PP BB 42ML"};
array< int , 100> barang{ };
array<int, 100> harga { };
array<int, 100> pcs { };
array<int, 100> totharga { };
string kasir ;
int totbeli,totdiskon,totbelanja , tunai, kembalian,ppn;



 pembatas();
 
     cout <<"     PROGRAM PENJUALAN ALFAMIDI"<<endl;
   pembatas();
  
        cout<< "STOK BARANG SAAT INI "<<endl;
    for (int i=1;i <stokbarang.size(); i++){
        cout <<i << " : " <<stokbarang[i] <<endl;
       
    }
    cout << "\nNAMA KASIR                         : ";
    getline(cin, kasir);
    cout << "JUMLAH ITEM                        : ";
    cin>> jmlbeli;
    for (int i=1; i <= jmlbeli; i++){
        cout<< "PILIH NOMOR BARANG BELANJAAN KE "<<i<<"  : ";
       cin>>barang [i];
        cout<<"HARGA                              : ";
        cin>>harga [i];
        cout<<"BERAPA PCS ?                       : ";
        cin >> pcs[i];
        
        totharga[i]=harga[i]*pcs[i];
 
    }
    cout<<"UANG PEMBELI RP                    : ";
    cin >> tunai;
    
    cout<<"\t\n\n\n            Alfamidi BUKIT PALEM"<<endl;
    cout<<"        PT MIDI UTAMA INDONESIA TBK\n\n ";
    cout << "\t      JL. PALEM RAYA "<<endl;
    cout<< "Kritik & Saran:1500959,Al facare@mu.co.id"<<endl;
    cout << "\t WA/SMS : 081110640888"<<endl;
    pembatas();
    cout<< "Bon    SA37-124-13102HV8 Kasir  : "<<kasir<<endl;
    pembatas();
    for (int i=1; i<=jmlbeli;i++){
        if (barang[i]==1){
        cout <<stokbarang[1]<<"\t       "<<pcs[i]<<"    "<<harga[i]<<"    "<<totharga[i]<<endl;
        }
        else if ( barang[i]==2)
        {
        cout <<stokbarang[2]<<"\t       "<<pcs[i]<<"    "<<harga[i]<<"    "<<totharga[i]<<endl;
        }
        else if ( barang[i]==3)
        {
        cout <<stokbarang[3]<<"\t       "<<pcs[i]<<"    "<<harga[i]<<"    "<<totharga[i]<<endl;
        }
        else if ( barang[i]==4) {
        cout <<stokbarang[4]<<"\t       "<<pcs[i]<<"    "<<harga[i]<<"    "<<totharga[i]<<endl;}
        else {  cout << "stok barang yang anda masukan tidak tersedia";
        }
    }
    
    pembatas();
    totbeli=0;
    for (int i=1 ; i <= jmlbeli; i++){
        totbeli=totbeli+totharga[i];
        totharga [i]=totbeli;
    }
    if (totbeli<10000){
      totdiskon = 0;  
    }
    else { 
         totdiskon=400;
    }
     if (totbeli<10000){
     totbelanja = 0;  
    }
    else {
       
         totbelanja=totbeli-400;
    }
     if (totbeli<10000){
     ppn = 0;  
    }
    else { 
         ppn=1031;
    }

    kembalian=tunai-totbelanja;
       cout<<"TOTAL ITEM         "<<jmlbeli<<"              "<<totbeli<<endl;
       cout<<"Total Disc.   "<<"                    "<<totdiskon<<endl;
       cout<<"Total Belanja "<<"                    "<<totbelanja<<endl;
       cout<<"Tunai         "     <<"                    "<<tunai<<endl;
       cout<<"kembalian     "   <<"                    "<<kembalian<<endl;
       cout<<"PPN           "   <<"(   "<<ppn<<")"<<endl;
        time_t detik = time(0);
        
        tm * ltm= localtime(&detik);
      
      
                                                                                                   
       pembatas();
       cout << "tgl.    "<<ltm->tm_mday<<"-"<<1 + ltm->tm_mon<<"-"<<1900 + ltm->tm_year<<"  "<<1 + ltm->tm_hour<<":"<<1 + ltm->tm_min<<":"<<1 + ltm->tm_sec<<"   V.2022.5.0"<<endl;
       pembatas();
       cout<<"      PT MIDI UTAMA INDONESIA TBK"<<endl;
       cout<<"      PT MIDI UTAMA INDONESIA TBK"<<endl;
       cout<<"ALFA TOWER LT. 12, JL JALUR SUTERA BARAT"<<endl;
       cout<<"KAV. 7-9 ALAM SUTERA PANUNGGANGAN TIMUR"<<endl;
      cout<< "    PINANG KOTA TANGGERANG BANTEN";
    return 0;
}




