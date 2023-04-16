// Introduction to Constant (let)
let presentYear: Int = 2023;
let helloWorld: String = "Hello, world!";

// Summing Strings
let summingStr: String = "\"\(helloWorld + String(presentYear))\" is great sentence.";

let multiLines: String = """
    I said "\(helloWorld)"
    But this is bullshit.
    """

print(summingStr + "\n" + multiLines);

// Introduction to Variable (var)
// Introduction to Array & Dictonary
var myCars: [String] = ["F8 Tributo", "SF90 Stradale Spider", "Ghost"];

myCars[2] = "Phantom";
myCars.append("Chiron");

var testOccupations: [String: String] = [
    "Ferrari" : "Red",
    "McLaren" : "Black",
    "Lambo" : "Yellow"
];

testOccupations["Bugatti"] = "Blue";

let emptyArray: [String] = [];
let emptyDictonary: [String: Float] = [:];

// Introduction to Control Flow
let personalScores = [75, 43, 100, 87, 88];
var teamScore = 0;

for score in personalScores {
    if (score > 50) {
        teamScore += 3;
    } else {
        teamScore += 1;
    }
}

print("Your team score equals to \"" + String(teamScore) + "\"");

var optionalString: String? = "Hello";
// print(optionalString == nil);
// Prints "false" 'cause it is not null. It has "Hello"

var optionalName: String? = "Jae Yun Jeong";
var greeting = "Hello?!";

if let name = optionalName {
    greeting = "Hello, \(name)";
}

print(greeting);

let nickName: String? = nil;
let fullName: String = "Jae Yun Jeong";
let informalGreeting = "Hi \(nickName ?? fullName)";

if let nickName {
    print("Hey, \(nickName)");
} // if not nickName = nil;

print(informalGreeting);

let vetetable = "red pepper";
switch vetetable {
case "celery":
    print("Add some raisins and make ants on a log.");
case "cucumber", "watercress":
    print("That would make a good tea sandwich.");
case let x where x.hasSuffix("pepper"):
    print("Is it spicy \(x)?");
default:
    print("Everything tastes good in soup.")
}

