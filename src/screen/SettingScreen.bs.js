// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as React from "react";
import * as GlobalStyle from "../helpers/GlobalStyle.bs.js";
import * as ReactNative from "react-native";

function SettingScreen(Props) {
  var navigation = Props.navigation;
  return React.createElement(ReactNative.View, {
              style: GlobalStyle.styles.container,
              children: null
            }, React.createElement(ReactNative.Button, {
                  onPress: (function (param) {
                      ReactNative.AsyncStorage.clear();
                      navigation.navigate("Auth");
                      return /* () */0;
                    }),
                  title: "I'm done, sign me out"
                }), React.createElement(ReactNative.StatusBar, {
                  barStyle: "default"
                }));
}

SettingScreen.navigationOptions = {
  title: "Lots of features here"
};

var make = SettingScreen;

export {
  make ,
  
}
/*  Not a pure module */
