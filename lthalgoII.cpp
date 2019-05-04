#include<iostream>
#include<stdlib.h>
using namespace::std;
struct mi{
int harga,jm;
};
main()
{
    mi market[50];
    string nomor[6]={"A001","A002","A003","A005","A006","A008"};
    string nama[5]={"Bayu","Irfan","Susiati","Diana","Roni"};
    string member,j,n,namaku;
    int jum=5,b,hs,total=0,hasil2,hs2;
    int temp=0;
   cout<<"\n===mini market defat==="<<endl;
   cout<<"\napakah anda member(ya/tdk)=";cin>>member;
   if(member=="ya"){
    cout<<"\nmasukkan no id=";cin>>j;
    for(int i=0;i<jum;i++){
        if(j==nomor[i]){
            namaku=nama[i];
        }
    }

    cout<<"\nmasukkan jumlah jenis barang=";cin>>b;

    for(int t=0;t<b;t++){
        cout<<"\njenis ke:["<<t+1<<"]";
        cout<<"\njumlah=";cin>>market[t].jm;
        cout<<"\nharga=";cin>>market[t].harga;
    for(int c=0;c<b-1;c++){
    if(market[c].harga>market[c+1].harga)
    {
        temp=market[c].harga;
        market[c].harga=market[c+1].harga;
        market[c+1].harga=temp;

        temp=market[c].jm;
        market[c].jm=market[c+1].jm;
        market[c+1].jm=temp;
    }
    hs=market[t].jm*market[t].harga;
        total=total+hs;
    }
    }system("cls");
    cout<<"\n===mini market defat==="<<endl;
    cout<<"\nanda member";
    cout<<"\nnomor id="<<j;
    cout<<"\nnama="<<namaku<<endl;
    for(int c=0;c<b;c++)
{
    cout<<"\njenis ke:["<<c+1<<"]";
    cout<<"\n-------------------";
    cout<<"\n jumlah:"<<market[c].jm<<endl;
    cout<<"\n harga:"<<market[c].harga<<endl;
}
    cout<<"\njumlah harga="<<total;
    hasil2=total*0.05;
    hs2=total-hasil2;
    cout<<"\njumlah harga setelah diskon="<<hs2<<endl;
   }
   else  {
    cout<<"\nmasukkan nama=";cin>>n;
     cout<<"\nmasukkan jumlah jenis barang=";cin>>b;
    for(int t=0;t<b;t++){
        cout<<"\njenis ke:["<<t+1<<"]";
        cout<<"\njumlah=";cin>>market[t].jm;
        cout<<"\nharga=";cin>>market[t].harga;
      for(int c=0;c<b-1;c++){
    if(market[c].harga>market[c+1].harga)
    {
        temp=market[c].harga;
        market[c].harga=market[c+1].harga;
        market[c+1].harga=temp;

        temp=market[c].jm;
        market[c].jm=market[c+1].jm;
        market[c+1].jm=temp;
    }
    hs=market[t].jm*market[t].harga;
        total=total+hs;
    }
    }system("cls");
    cout<<"\n===mini market defat==="<<endl;
    cout<<"\nnama   ="<<n<<endl;
      for(int c=0;c<b;c++)
{
    cout<<"\n-------------------";
    cout<<"\n jumlah:"<<market[c].jm<<endl;
    cout<<"\n harga:"<<market[c].harga<<endl;
}
    cout<<"\njumlah harga="<<total<<endl;
   }
}
