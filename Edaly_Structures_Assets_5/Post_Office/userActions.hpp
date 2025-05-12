            class ShowPanel_1
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "show";
                priority = 11;
                actionNamedSel = "Closed_1_down";
                position = "closed_1_trigger";
                radius = 2.5;
                aiMaxRange = 5.25;
                onlyForPlayer = 1;
                condition = "((this animationSourcePhase 'Closed_1_source') == 0) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_1_source', 1]";
            };
            class HidePanel_1: ShowPanel_1
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                actionNamedSel = "Closed_1";
                displayName = "hide";
                priority = 11;
                condition = "((this animationSourcePhase 'Closed_1_source') == 1) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_1_source', 0]";
            };
            
            class ShowPanel_2
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "show";
                priority = 11;
                actionNamedSel = "Closed_2_down";
                position = "closed_2_trigger";
                radius = 2.5;
                aiMaxRange = 5.25;
                onlyForPlayer = 1;
                condition = "((this animationSourcePhase 'Closed_2_source') == 0) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_2_source', 1]";
            };
            class HidePanel_2: ShowPanel_2
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                actionNamedSel = "Closed_2";
                displayName = "hide";
                priority = 11;
                condition = "((this animationSourcePhase 'Closed_2_source') == 1) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_2_source', 0]";
            };
            
            class ShowPanel_3
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "show";
                priority = 11;
                actionNamedSel = "Closed_3_down";
                position = "closed_3_trigger";
                radius = 2.5;
                aiMaxRange = 5.25;
                onlyForPlayer = 1;
                condition = "((this animationSourcePhase 'Closed_3_source') == 0) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_3_source', 1]";
            };
            class HidePanel_3: ShowPanel_3
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                actionNamedSel = "Closed_3";
                displayName = "hide";
                priority = 11;
                condition = "((this animationSourcePhase 'Closed_3_source') == 1) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_3_source', 0]";
            };
            
            class ShowPanel_4
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "show";
                priority = 11;
                actionNamedSel = "Closed_4_down";
                position = "closed_4_trigger";
                radius = 2.5;
                aiMaxRange = 5.25;
                onlyForPlayer = 1;
                condition = "((this animationSourcePhase 'Closed_4_source') == 0) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_4_source', 1]";
            };
            class HidePanel_4: ShowPanel_4
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                actionNamedSel = "Closed_4";
                displayName = "hide";
                priority = 11;
                condition = "((this animationSourcePhase 'Closed_4_source') == 1) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_4_source', 0]";
            };
            
            class ShowPanel_5
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "show";
                priority = 11;
                actionNamedSel = "Closed_5_down";
                position = "closed_5_trigger";
                radius = 2.5;
                aiMaxRange = 5.25;
                onlyForPlayer = 1;
                condition = "((this animationSourcePhase 'Closed_5_source') == 0) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_5_source', 1]";
            };
            class HidePanel_5: ShowPanel_5
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                actionNamedSel = "Closed_5";
                displayName = "hide";
                priority = 11;
                condition = "((this animationSourcePhase 'Closed_5_source') == 1) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_5_source', 0]";
            };
            
            class ShowPanel_6
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "show";
                priority = 11;
                actionNamedSel = "Closed_6_down";
                position = "closed_6_trigger";
                radius = 2.5;
                aiMaxRange = 5.25;
                onlyForPlayer = 1;
                condition = "((this animationSourcePhase 'Closed_6_source') == 0) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_6_source', 1]";
            };
            class HidePanel_6: ShowPanel_6
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                actionNamedSel = "Closed_6";
                displayName = "hide";
                priority = 11;
                condition = "((this animationSourcePhase 'Closed_6_source') == 1) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_6_source', 0]";
            };
            
            class ShowPanel_7
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "show";
                priority = 11;
                actionNamedSel = "Closed_7_down";
                position = "closed_7_trigger";
                radius = 2.5;
                aiMaxRange = 5.25;
                onlyForPlayer = 1;
                condition = "((this animationSourcePhase 'Closed_7_source') == 0) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_7_source', 1]";
            };
            class HidePanel_7: ShowPanel_7
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                actionNamedSel = "Closed_7";
                displayName = "hide";
                priority = 11;
                condition = "((this animationSourcePhase 'Closed_7_source') == 1) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animateSource ['Closed_7_source', 0]";
            };
