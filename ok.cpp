               // Escape key pressed
            if ((Event.Type == sf::Event::KeyPressed) && (Event.Key.Code == sf::Key::Escape))
                App.Close();
            
            // right key pressed
            if ((Event.Type == sf::Event::KeyPressed) && (Event.Key.Code == sf::Key::Right))
                right_pressed=1;
            
            // right key pressed
            if ((Event.Type == sf::Event::KeyReleased) && (Event.Key.Code == sf::Key::Right))
                right_pressed=0;
