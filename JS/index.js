let ct = 0;
const getData = () => {
    console.log('first', ct++)
}
// DEBOUCING
// Call get data method only when user wait for or takes a pause 
const debouce = (FN, delay) => {
    let timer
    return () => {
        clearInterval(timer)  // to avoid having lot of calls of get data coz when a timer is running and suddenly user types another key then a new timer will start but prevoius wont stop ans that will call getdata , and the new timer will also call therefore we if there is running timer previously then it will first clear that timer.
        timer=setTimeout(() => {
            FN();
        }, delay);
    }
}
const betterFunction = debouce(getData, 500);

// var http = require("http");
// http.createServer(function (request, response) {
//   response.writeHead(200, {'Content-Type': 'html'});
//   console.log('response', request.body)
//   response.write(`<html><body>HII<img src="https://images.google.com/images/branding/googlelogo/1x/googlelogo_color_272x92dp.png" /></body></html>`)
//   response.end();
// }).listen(3000);

var http = require("http");
http.createServer(function (request, response) {
  response.writeHead(200, {'Content-Type': 'application/json'});
  console.log('response', request.body)
  response.write(JSON.stringify({name:'vedant'}))
  response.end();
}).listen(3000);