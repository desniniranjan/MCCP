        const cardStyle = {
                border: "2px solid #333",
                        padding: "20px",
                                borderRadius: "10px",
                                        width: "250px",
                                                textAlign: "center",
                                                        boxShadow: "2px 2px 10px rgba(0,0,0,0.1)"
                                                            };

                                                                const headingStyle = {
                                                                        color: "blue",
                                                                                fontSize: "20px"
                                                                                    };

                                                                                        return (
                                                                                                <div style={cardStyle}>
                                                                                                            {/* Greeting message */}
                                                                                                                        <h2 style={headingStyle}>{greeting}</h2>

                                                                                                                                    {/* Displaying dynamic values */}
                                                                                                                                                <p>Hello, my name is {name}.</p>
                                                                                                                                                            <p>I am {age} years old.</p>

                                                                                                                                                                        {/* Expression slot example - current year */}
                                                                                                                                                                                    <p>Year: {new Date().getFullYear()}</p>

                                                                                                                                                                                                <p>Enjoy your day! 🎉</p>
                                                                                                                                                                                                        </div>
                                                                                                                                                                                                            );
                                                                                                                                                                                                            }

                                                                                                                                                                                                            // App component: Using multiple instances of GreetingCard with different values
                                                                                                                                                                                                            export function App() {
                                                                                                                                                                                                                return (
                                                                                                                                                                                                                        <GreetingCard name="Alice" age={30} greeting="Happy Birthday, Alice!" />
                                                                                                                                                                                                                            );
                                                                                                                                                                                                                            }

                                                                                                                                                                                                                            export default App;
    // Inline CSS styling for the card
export function GreetingCard({ name, age, greeting }) {
// GreetingCard component: A reusable component that displays a greeting card