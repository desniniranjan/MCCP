===FILENAME:src/App.jsx===
import React, {useState, useEffect} from "react";

function LightSwitch() {
  const [isOn, setIsOn] = useState(false);

    // Fix 1: Add isOn to dependencies
      useEffect(() => {
          const handleKeyPress = (e) => {
                if (e.code === "KeyL") {
                        setIsOn(!isOn); // Uses latest isOn
                              }
                                  };
                                      window.addEventListener("keydown", handleKeyPress);
                                          return () => window.removeEventListener("keydown", handleKeyPress);
                                            }, [isOn]); // 👈 Re-run effect when isOn changes

                                              // Fix 2: Functional update (comment out Fix 1 to test this)
                                                // useEffect(() => {
                                                  //   const handleKeyPress = (e) => {
                                                    //     if (e.code === "KeyL") {
                                                      //       setIsOn((current) => !current); // Always fresh!
                                                        //     }
                                                          //   };
                                                            //   window.addEventListener("keydown", handleKeyPress);
                                                              //   return () => window.removeEventListener("keydown", handleKeyPress);
                                                                // }, []); // 👈 No dependencies needed

                                                                  return (
                                                                      <div>
                                                                            <button onClick={() => setIsOn(!isOn)}>
                                                                                    Toggle Light (Button)
                                                                                          </button>
                                                                                                <p>Light is {isOn ? "ON 🌟" : "OFF 🌑"}</p>
                                                                                                      <small>Press "L" key to toggle!</small>
                                                                                                          </div>
                                                                                                            );
                                                                                                            }

                                                                                                            export default LightSwitch;