void boundCall(int argc, char *argv[])
{
  auto retVal = combine(argc, argv);

  std::cout << "Requested argument number: " << retVal.nr << '\n'
		    << "Value of argument: " << retVal.value << '\n';
}
