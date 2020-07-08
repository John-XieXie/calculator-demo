# calculator-demo

This calculator-demo demonstrates how Mongoose could be used to implement
RESTful APIs. Start typing numbers into the URL fields.
Web server calclulates the sum and returns the result.
For example, if we invoke http://127.0.0.1:8018/10+12*2, the response from server is “{result: 34}

# Step

* step 1: clone the code from git repository
    git clone https://github.com/John-XieXie/calculator-demo.git

* step 2: enter the directory
    cd calculator-demo/examples/restful_server/

* step 3: compile the code
    make

* step 4: run the restful_server
    ./restful_server &

* step 5: open the browser, and enter 
    http://127.0.0.1:8018/1+2*3
