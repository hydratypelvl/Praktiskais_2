//Darba Autors Rihards Jānis Ādminis P2-4

//2. praktiskais darbs - klases. Izmantot gan iekšējās, gan ārējās metodes! 

// 1. Izveidot klasi, kas apraksta uzņēmumu. Tam ir jābūt ar minimāli trīs privātiem atribūtiem. Viens no parametriem - darbinieku skaits. 
// 2. Pievienot katram atribūtam atbilstošās set (piešķir atribūtam vērtību no sava parametra) un get (atgriež atribūta vērtību) metodes. Pievienot print metodi, kas izvada visu lauku vērtību. 
// 3. Pievienojiet konstruktoru (bez parametriem), kas inicializē klases atribūtus ar noklusētām vērtībām. 
// 4. Pārslogojiet klases konstruktoru, lai tas piešķirtu klases atribūtiem parametru vērtības. 
//5. Nodefinēt destruktoru, kas paziņo, ka uzņēmums (izdrukā tā datus) ir bankrotējis 
// 6. Izveidot funkciju getTotalSalary, kas kā parametru saņem uzņēmuma vidējo viena darbineika algu, atgriež kopīgo uzņēmuma izmaksāto algu apjomu (vienā mēnesī). 
// 7. Pārslogojiet funkciju getTotalSalary, lai tai būtu otrs atribūts – mēnešu skaits un lai tā aprēķinā kopējo vidējo visu darbinieku algu noradītajā mēnešu skaitā. 
// 1 8. Norādiet konstantās metodes. 
// 9. Pievienot statisko klases atribūtu, kas atcerēsiet izveidoto uzņēmumu skaitu. Kā sākuma vērtību tam piešķirt 0. 
// 10. Izmainīt konstruktorus, lai tie palielina statiskā atribūta vērtību pa 1 un izdrukātu, kurš pēc kārtas uzņēmums ir nodibināts. 
// 11. Izmainīt destruktoru, lai tas samazinātu atribūta vērtību pa 1 un paziņotu, cik daudz uzņēmumu palika. 
// 12. Pievienot statisko metodi, lai tā atgrieztu uzņēmumu skaitu. 
// 13. main funkcijā izveidojiet vienu statisko un vienu dinamisko objektu ar noklusētu konstruktoru un vēl vienu statisko un vienu dinamisko objektu ar pārslogoto konstruktoru. 14. Izsauciet visas klases metodes (daļu var izsaukt 1. objektam un daļu - 2., 3. un 4.). Izdrukājiet informāciju par visiem uzņēmumiem! 
// 15. Izsauciet abas getTotalSalary (vienu - vienam objektam un otru - citam). 
// Nododot darrbu jāorientējās šādās tēmās: 
// 1. Kas ir klase? Kā to izveido? Kas ir private un public? 
// 2. Kas ir objekts? Kā to izveido? 
// 3. Kas ir dinamisks objekts? Kā to izveido? 
// 4. Kas ir atribūts? 
// 5. Kas ir metode? Kā veido iekšējo metodi? Kā veido ārējo metodi? 
// 6. Kas ir konstruktors? Kad to izsauc? 
// 7. Kas ir destruktors? Kad to izsauc? 
// 8. Ko nozīmē pārslogot metodes? 
// 9. Ko nozīmē pārslogot konstruktoru? 
// 10. Vai destruktoru var pārslogot? Kāpēc? 
// 11. Kā izveido objektu statiski ar noklusēto konstruktoru? 
// 12. Kā izveido objektu statiski ar pārdefinēto konstruktoru? 
// 13. Kā izveido objektu dinamiski ar noklusēto konstruktoru? 
// 14. Kā izveido objektu dinamiski ar pārdefinēto konstruktoru? 
// 15. Kā izsauc klases metodes (bez parametriem, ar parametriem)? Ko vispār nozīmē izsaukt metodi? 
// 16. Kas ir const metodes? 
// 17. Kas ir static atribūti? 
// 18. Kas ir static metodes? 
// 19. Kas ir norāde this?
#include <iostream>
#include <string>

using namespace std;

class Uznemums {
  private:
    int darbiniekuSkaits;
    float platiba, ienemumi;
  public:
    int dibinasanasGads;
    Uznemums(){
      this->darbiniekuSkaits = 1336;
      this->platiba = 120000;
      this->ienemumi = 123686;
      this->dibinasanasGads = 1999;
    }
    Uznemums(int dbsk, float plt, float ienem, int dibg){
      this->darbiniekuSkaits = dbsk;
      this->platiba = plt;
      this->ienemumi = ienem;
      this->dibinasanasGads = dibg;
    }
    //Setters
    void setDarbiniekuSkaits(int ds) {
      darbiniekuSkaits = ds;
    }
    void setPlatiba(int p) {
      platiba = p;
    }
    void setIenemumi(float ie) {
      ienemumi = ie;
    }
    void setDibinasanasGads(int dg) {
      dibinasanasGads = dg;
    }
    //Getters
    int getDarbiniekuSkaits() {
      return darbiniekuSkaits;
    }
    float getPlatiba() {
      return platiba;
    }
    float getIenemumi() {
      return ienemumi;
    }
    int getDibinasanasGads() {
      return dibinasanasGads;
    }

  void printAllData(){
    cout 
    << "\n--------------------------" 
    << "\nDibinasanas Gads: " << getDibinasanasGads()
    << "\nDarbinieku skaits: " << getDarbiniekuSkaits()
    << "\nPlatiba: " << getPlatiba() << " km2"
    << "\nIenemumi: " << getIenemumi() << " Eur"
    << "\n--------------------------\n";  
  }
  ~Uznemums() {
        printAllData();
        cout 
        << " Uznemums ir Bankrotejis! \n" 
        << "--------------------------\n";
    }
};
int main() {
  Uznemums *latvijasGaze = new Uznemums(199,12000,300000,2010);
  latvijasGaze->printAllData();
  cout << " new line \n";
  delete latvijasGaze;
}