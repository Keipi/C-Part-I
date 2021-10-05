#include "main.ih"

int main(int argc, char *argv[])
{
  if (argc == 1)
    usage();	  

  bool status = structCall(argc, argv);

  if (status)
    boundCall(argc, argv);
}
