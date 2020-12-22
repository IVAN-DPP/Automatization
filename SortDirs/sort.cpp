#include <iostream>
#include <dirent.h>
#include "./src/sort.cc"
#include <string>
using namespace std;

int main() {

  Sort *Fotos = new Sort("/home/elchorco/Descargas");
  Fotos->NewDir("Fotos");
  Fotos->Save("jpg","png","eps","jpeg");
  Sort *Pdf = new Sort("/home/elchorco/Descargas");
  Pdf->NewDir("Pdfs");
  Pdf->Save("pdf","djvu");
  Sort *Docs = new Sort("/home/elchorco/Descargas");
  Docs->NewDir("Docs");
  Docs->Save("docx");
  Sort *Comp = new Sort("/home/elchorco/Descargas");
  Comp->NewDir("ArchivosComp");
  Comp->Save("rar","zip","gz","tar","xz");
  Sort *Rpm = new Sort("/home/elchorco/Descargas");
  Rpm->NewDir("Rpms");
  Rpm->Save("rpm");
  Sort *Videos = new Sort("/home/elchorco/Descargas");
  Videos->NewDir("Videos");
  Videos->Save("mkv","mp4");
  Sort *N64 = new Sort("/home/elchorco/Descargas");
  N64->NewDir("N64Juegos");
  N64->Save("n64");
  Sort *ROOT = new Sort("/home/elchorco/Descargas");
  ROOT->NewDir("ROOTSkims");
  ROOT->Save("root");


  return 0;
}
