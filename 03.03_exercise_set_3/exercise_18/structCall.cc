bool structCall(int argc, char *argv[])
{
  struct ReturnValues
  {
    bool ok;
	size_t nr;
	std::string value;
  };

  ReturnValues retVal;

  auto ret = combine(argc, argv);
  
  retVal.ok = ret.ok;
  retVal.nr = ret.nr;
  retVal.value = ret.value;
  
  if (retVal.ok == true)
    std::cout << "Requested argument number: " << retVal.nr << '\n'
			  << "Value of argument: " << retVal.value << '\n';
  else
    usage("combine");

  return retVal.ok;
}
