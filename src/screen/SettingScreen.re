open ReactNative;
open ReactNavigation;
open GlobalStyle;

 [@react.component]
  let make = (~navigation: Navigation.t) => {
    let _signOutAsync = () => {
      AsyncStorage.clear() |> ignore;
      navigation->Navigation.navigate("Auth");
    };

    <View style=styles##container>
      <Button title="I'm done, sign me out" onPress={_ => _signOutAsync()} />
      <StatusBar barStyle=`default />
    </View>;
  };
  make->NavigationOptions.setNavigationOptions(
    NavigationOptions.t(~title="Lots of features here", ()),
  );