#include <iostream>
using namespace std;

class MataKuliah {
private : //enkapsul
	float presensi, activity, exercise, tugasAkhir;
public:
	MataKuliah()
	{
		presensi = 0.0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	//polymorph
	virtual void namaMataKuliah() { return; }
	virtual void InputNilai() { return ; }
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void TampilkanKelulusan() { return ; }
	
	void setPresensi(float nilai)
	{
		this->presensi = nilai;
	}
	float getPresensi()
	{
		return presensi;
	}

	void setActivity(float nilai)
	{
		this->activity = nilai;
	}
	float getActivity()
	{
		return activity;
	}

	void setExercise(float nilai)
	{
		this->exercise = nilai;
	}
	float getExercise()
	{
		return exercise;
	}

	void setTugasAkhir(float nilai)
	{
		this->tugasAkhir = nilai;
	}
	float getTugasAkhir()
	{
		return presensi;
	}
};

class Pemrograman : public MataKuliah{ // inheritance


public:

	void namaMataKuliah() {
		string matkul;
		cout << "nama mata kuliah : " << endl;
		cin >> matkul;
	}

	 void InputNilai() {
		 float presensi;
		 int Nilai1, Nilai2, Nilai3;
		cout << "Masukkan nilai presensi :" << endl;
		cin >> presensi;
		setPresensi(presensi);
		cout << "Masukkan nilai activity :" << endl;
		cin >> Nilai1;
		setActivity(Nilai1);
		cout << "Masukkan nilai exercise :" << endl;
		cin >> Nilai2;
		setExercise(Nilai2);
		cout << "Masukkan nilai tugas akhir :" << endl;
		cin >> Nilai3;
		setTugasAkhir(Nilai3); 
	}

	 float hitungNilaiAkhir() {
		 return ( getPresensi() + getActivity() + getExercise() + getTugasAkhir() ) / 4;
	}

	 void TampilkanKelulusan() {
		 cout << "nilai akhir :" << hitungNilaiAkhir() << endl;
		 string status;
		 if (this->hitungNilaiAkhir() > 75) {
			 status = "selamat anda lulus";
		 }
		 else {
			 status = "anda tidak lulus";
		 }
		 cout << status << endl;
	 }
};

class jaringan : public MataKuliah
{

public:

	void namaMataKuliah() {
		string matkul;
		cout << "nama mata kuliah : " << endl;
		cin >> matkul;
	}

	void InputNilai() {
		int Nilai1, Nilai2, Nilai3;
		cout << "Masukkan nilai activity :" << endl;
		cin >> Nilai1;
		setActivity(Nilai1);
		cout << "Masukkan nilai exercise :" << endl;
		cin >> Nilai2;
		setExercise(Nilai2);
		cout << "Masukkan nilai tugas akhir :" << endl;
		cin >> Nilai3;
		setTugasAkhir(Nilai3);
	}

	float hitungNilaiAkhir() {
		return  (getActivity() + getExercise() + getTugasAkhir())/3;
	}

	void TampilkanKelulusan() {
		cout << "nilai akhir :" << hitungNilaiAkhir() << endl;
		string status;
		if (this->hitungNilaiAkhir() > 75) {
			status = "selamat anda lulus";
		}
		else {
			status = "anda tidak lulus";
		}
		cout << status << endl;
	}
};



int main() {
	int pilih;
	MataKuliah* matakuliah;
	Pemrograman PRM;
	jaringan JRN;

	do
	{
		cout << "pilih mata kuliah" << endl;
		cout << "1. pemograman" << endl;
		cout << "2. jaringan" << endl;
		cout << "3. Keluar Program" << endl;
		cin >> pilih;
		
		switch (pilih)
		{
		case 1:
			PRM.InputNilai();
			PRM.TampilkanKelulusan();

			break;

		case 2:
			JRN.InputNilai();
			JRN.TampilkanKelulusan();

				break;

		case 3:
			cout << " keluar dari program" << endl;
			break;
		default:
			cout << "pilihan tidak ada" << endl;

		}
	} while (pilih !=3);

	return 0;


}
