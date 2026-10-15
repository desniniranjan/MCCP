===FILENAME:src/App.jsx===
import { useState, useRef } from 'react';
import './App.css';

function FocusManager() {
  const [isFocused, setIsFocused] = useState(false);
    const inputRef = useRef(null); // Create ref

      const handleFocus = () => {
          inputRef.current.focus(); // DOM manipulation
              setIsFocused(true);
                };

                  const handleBlur = () => {
                      inputRef.current.blur(); // DOM manipulation
                          setIsFocused(false);
                            };

                              return (
                                  <div className="container">
                                        <input
                                                ref={inputRef} // Attach ref
                                                        type="text"
                                                                className={`input-field ${isFocused ? 'input-focused' : ''}`}
                                                                        placeholder="Click buttons to focus/blur"
                                                                              />
                                                                                    
                                                                                          <div className="button-group">
                                                                                                  <button className="action-button" onClick={handleFocus}>
                                                                                                            Focus Input
                                                                                                                    </button>
                                                                                                                            <button className="action-button" onClick={handleBlur}>
                                                                                                                                      Blur Input
                                                                                                                                              </button>
                                                                                                                                                    </div>
                                                                                                                                                        </div>
                                                                                                                                                          );
                                                                                                                                                          }

                                                                                                                                                          export default FocusManager;