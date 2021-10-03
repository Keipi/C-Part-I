double sum(int argc, char *argv[], double isDbl)        // Function to sum dbls
{
  double out = 0;                      // Init output value

                                       // Loop over all argv arguments
									   // Skipping program call name
  for (int idx = 1; idx < argc; ++idx)
    out += std::stod(argv[idx]);      // Convert input to dbl 

  return(out);
}
