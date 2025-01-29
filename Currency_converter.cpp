// Project: Currency Converter using an API

//In this project I will use this external service that will work with my code to convert
//from one money currency to another.
//the API key for this service is cf10fcdb977ae0333a4fe20e
//The API key will be my program ID card,when it communicates with the API(the external
//service that its trying to reach in this case its a money currency converter)
//without the API key the service will be denied.

// 2. Set up your project in C++ and include a library like `libcurl` for HTTP requests.
#include <iostream>
#include <string>
using namespace std;
//In order to install and use 'libcurl' library, you typically need to first update the
//available  package  and their version.
//So we use the following command to accomplish this:
//"sudo apt update && sudo apt install -y libcurl4-openssl-dev"
//"sudo" command is to give me the temporary admin permission to dothis command.
//"apt update" as we said earlier to update the package and its version.
//"&&" is a operator that makes sure the first command its successful before procceding.
//"apt install" install a specific packaage.
//"-y"is to automatically confirm ,when the system prompts you to confirm the installed package
//"libcur14-openssl-dev" this is the developtment package of libcurl(which is needed
//to run the libcurl command)
//after we run the command we should be able to code and use the libcurl command.
#include <curl/curl.h>



// 3. Write a function to send a request to the currency API.
//    - Input: Base currency (e.g., USD) and target currency (e.g., EUR).
//    - Output: Conversion rate from the API.

// 4. Create a menu for the user.
//    - Ask the user for the base currency.
//    - Ask for the target currency.
//    - Ask for the amount to convert.

// 5. Use the conversion rate from the API to calculate the converted amount.
//    - Print the result to the user.

// 6. Handle errors:
//    - Invalid API responses or network issues.
//    - User inputs invalid currency codes.

// 7. Add comments or logging to show what’s happening at each step.
