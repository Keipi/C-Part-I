struct ReturnValues
{
  bool ok;
  size_t nr;
  std::string value;

  void assignValues(int argc, char *argv[]);
};

void ReturnValues::assignValues(int argc, char *argv[]) 
{
  nr = std::stoul(argv[1]);

  if (nr < (argc + 1))
  {
    ok = true;
    value = argv[nr - 1];
  }
  else
    ok = false;
};

struct ReturnValues combine(int argc, char *argv[])
{
  ReturnValues retVal;

  retVal.assignValues(argc,argv);

  return retVal;

}
