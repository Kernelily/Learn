// Import the actix_web crate and the get and HttpResponse structs
use actix_web::{get, post, web, App, HttpResponse, HttpServer, Responder};

// Define a function called hello that returns an HttpResponse
// The get attribute macro indicates that this function will be called when the app receives a GET request to the / path
// The async keyword indicates that this function will run asynchronously
// The -> impl Responder syntax indicates that this function will return something that implements the Responder trait
// The HttpResponse::Ok() function returns an HttpResponse with a 200 OK status code
// The body() method sets the response body to "Hello world!"
// The body() method returns a reference to the HttpResponse, which is returned from the function
// The #[get("/")] attribute macro is shorthand for #[route(GET, "/")]
#[get("/")]
async fn hello() -> impl Responder {
    HttpResponse::Ok().body("Hello world!")
}

#[post("/echo")]
async fn echo(req_body: String) -> impl Responder {
    HttpResponse::Ok().body(req_body)
}

async fn manual_hello() -> impl Responder {
    HttpResponse::Ok().body("Hey there!")
}

// The #[actix_web::main] macro executes the async main function within the actix runtime.
#[actix_web::main]
async fn main() -> std::io::Result<()> {
    HttpServer::new(|| {
        // The App::new() function creates an instance of an application.
        // Use App::service for the handlers using routing macros and App::route
        App::new()
            .service(hello)
            .service(echo)
            .route("/hey", web::get().to(manual_hello))
    })
    .bind(("0.0.0.0", 8080))?
    .run()
    .await
    // Finally, the app is started inside an HttpServer which will serve incoming requests using your App as an "application factory".
}
