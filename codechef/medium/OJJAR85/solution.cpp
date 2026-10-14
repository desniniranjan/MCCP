
    const generateRandomString = () => {
        const randomStr = Math.random().toString(36).substring(2, 8);
            setValue(randomStr);
              };

                return (
                    <div className="container">
                          <h2>useState Form Value Demo</h2>
                                <input
                                        type="text"
                                                value={value}
                                                        onChange={(e) => setValue(e.target.value)}
                                                                placeholder="Type something..."
                                                                        className="input-field"
                                                                              />
                                                                                    <div className="output-box">
                                                                                            <p>Live Display: {value}</p>
                                                                                                  </div>
                                                                                                        <button onClick={generateRandomString} className="btn">Generate Random String</button>
                                                                                                            </div>
                                                                                                              );
                                                                                                              }
export default function UseStateForm() {
  const [value, setValue] = useState("");
import "./App.css";

import { useState } from "react";