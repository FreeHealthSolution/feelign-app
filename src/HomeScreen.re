open ReactNative;
open ReactNavigation;
open GlobalStyle;

[@react.component]
let make = (~navigation: Navigation.t) => {
    let _showMoreApp = () => navigation->Navigation.navigate("Setting");
    let _signOutAsync = () => {
      AsyncStorage.clear() |> ignore;
      navigation->Navigation.navigate("Auth");
    };

    <View style=styles##container>
      <Button title="Show me more of the app" onPress={_ => _showMoreApp()} />
      <Button
        title="Actually, sign me out :)"
        onPress={_ => _signOutAsync()}
      />
    </View>;
 };

  make->NavigationOptions.setNavigationOptions(
    NavigationOptions.t(~title="Welcome to the app!", ()),
  );