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
//after we run the command we should be able to code and use the "libcurl" command.
#include <curl/curl.h>
//Next we will write a function that will collect the API response ,which will be in JSON format and is 
//a HTTP response.
//the following code defines the function "writeCallback",which comes from the "libcurl" library.to
//handle HTTP response.

//"size_t" tells us "writeCallback" will return a number that represents how many bytes it has worked
//with. This is important because, it makes sure the program handles sizes or counts of data 
//safely and efficiently, without errors.
//"writeCallback" function is from the "libcurl" library is used to handle HTTP responses coming from
//a server.
//"void* contents" is used to hold any type of data without knowing exactly what it is ahead of time.
//called "contents"
//"size_t size" in this context this will list the size in bytes from the response that the function
//"writeCallback" will receive.
//"size_t nmemb" this will also show how many pieces of data the server sent back.from the "writeCallback"
//response.
//"string* output" is where we will stored the response from the server, using "writeCallback" function.
size_t writeCallback(void*contents, size_t size, size_t nmemb, string* output) 
{ 
//"size_t totalSize" is a variable that will have the output of the multiplication of the "size"(how big each chunk is) and "nmemb"(how many chunks
//there are).
    size_t totalSize = size * nmemb;
//The function "->append" takes the data and adds it to the "output" string.The "char" is used to convert the data received from the server,
// which is in the form of a "void*" pointer, to text.The "void*" pointer was previously considered unknown or of an unspecified type.And totalSize
//tells us the how much data to add which we calculated earlier.
    output->append((char*)contents, totalSize); 
//the function return tells us how much bytes we just worked with and that the callback has succesful processed all data.
    return totalSize;
}

// 3.   
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
