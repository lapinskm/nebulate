//stub
#include <Magick++.h>

#include <iostream>

int main(int argc, char *argv[])
{
  if (argc !=4) {
    std::cout<<"Usage:\n  ./nebulate <input-image> <nebulas-dir> <output-image>\n";
    return 1;
  }
  char* input_image = argv[1];
  char* nebulas_dir = argv[2];
  char* output_image = argv[3];

  Magick::Image image;
  std::cout<<"Hello image magic world!\n";
  std::cout<<"Input image: "<<input_image<<"\n"
           <<"Nebulas dir: "<<nebulas_dir<<"\n"
           <<"output file: "<<output_image<<"\n";
  return 0;
}
