int sum(int argc, char *argv[])        // Fun to sum ints
{
  int out = 0;                         // Init output value

                                       // Loop over all argv arguments
									   // Skipping program call name
  for (int idx = 1; idx < argc; ++idx)
    out += std::stoul(argv[idx]);      // Convert input to int

  return(out);
}
