Purpose of this exercise: learn to use Raw String Literals

The following example shows how several NTBs, and some character constants are inserted into the output stream.

Remove the NTBs and transform them into one Raw String Literal (RSL) (assume header iostream has been included).

```cpp
    std::cout << "^\\s+Encryption key:(\\w+)"        << '\n' << 
                 "^\\s+Quality=(\\d+)"               << '\n' <<
                 "^\\s+E?SSID:\"([[:print:]]+)\""    << '\n' <<
                 "^\\s+ssid=\"([[:print:]]+)\""      << '\n';
```

Submit your implementation as a working C++ program. Also submit the output it produces.

Hints:

    the insertion operator should only once be used.
    as outlined in the hints and tips: define raw string literals outside of your main function body, and use the raw string's variable name in the cout statement.
    when solving the exercise you'll notice that you won't be able to use the R"(...)" form of the RSLs. Formulate (submit) a rule telling you when this form can and cannot be used.
