#include <iostream>
using namespace std;

class Array {
	public :
		void angka();  //nadila
		void semua_prodi();  //nur
		void per_prodi();  //farah
    void cetak();  //nadila
		
	private:
		int data[3][3]={{60, 65, 80}, {45, 80, 90}, {45, 90, 90}};;
		int i, j, rata1, rata2, a;
    float  hasil1[5], hasil2[5];
};

void Array::angka()
{
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<data[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Array::semua_prodi()
{
	a=0;
	for(i=0; i<3; i++)
	{
    rata1=0;
		for(j=0; j<3; j++)
		{
			rata1=rata1+data[i][j];
		}
    hasil1[i]=rata1/3;
    cout<<hasil1[i]<<" "<<endl;
		
	}
}

void Array::per_prodi()
{
  for(j=0; j<3; j++)
    {
      rata2=0;
      for(i=0; i<3; i++)
        {
          rata2=rata2+data[i][j];
        }
      hasil2[j]=rata2/3;
      cout<<hasil2[j]<<" ";
      
    }
}

void Array::cetak()
{
  cout<<"\n\n==================================================="<<endl;
  cout<<"\n\n\nDATA KELULUSAN MAHASISWA"<<endl<<endl;
  cout<<"Tahun || Prodi  || Teknik Komputer  || Teknik Elektro  || Teknik Pemesinan  ||Rata-Rata Lulus Perprodi"<<endl;
   int tahun=2015;
  int h=0;
  int l=0;
  for(i=0; i<3; i++)
    {
     
      cout<<tahun<<"  ||";
      for(j=0; j<3; j++)
        {
          cout<<data[i][j]<<"  ||  ";
        }
      cout<<"  "<<hasil1[h];
      h++;
      tahun=tahun+1;
      cout<<endl;
    }
   cout<<" Rata-rata Per tahun Per prodi||";
      for(int l=0; l<3; l++)
        {
          cout<<hasil2[l]<<"  || ";
        }
}


int main()
{
	
	Array array;
	array.angka();
	array.semua_prodi();
	array.per_prodi();
  array.cetak();
	return 0;
}
