/* open Demo; */
[@bs.module] external lab : Js.t({..}) = "./lab.json";

let x = lab##components;

let components = Belt.List.fromArray(x);

let decodeProps = json : Types.props => {
  let hover = json : Types.hover =>
    Json.Decode.{
      opacity: json |> field("opacity", int),
      transition: json |> field("transition", string),
    };
  let active = json : Types.active =>
    Json.Decode.{
      opacity: json |> field("opacity", int),
      transition: json |> field("transition", string),
    };
  Json.Decode.{
    src: json |> optional(field("src", string)),
    w: json |> optional(field("w", int)),
    mt: json |> optional(field("mt", int)),
    mb: json |> optional(field("mb", int)),
    my: json |> optional(field("my", int)),
    fontSize: json |> optional(field("fontSize", Json.Decode.array(int))),
    fontWeight: json |> optional(field("fontWeight", string)),
    color: json |> optional(field("colors", string)),
    borderColor: json |> optional(field("borderColor", string)),
    hover: json |> optional(field("hover", hover)),
    active: json |> optional(field("active", active)),
  };
};

let decodeStyle = json : Types.style =>
  Json.Decode.{
    display: json |> optional(field("display", string)),
    maxWidth: json |> optional(field("maxWidth", string)),
    textTransform: json |> optional(field("textTransform", string)),
    letterSpacing: json |> optional(field("letterSpacing", string)),
    lineHeight: json |> optional(field("lineHeight", string)),
    textDecoration: json |> optional(field("textDecoration", string)),
    whiteSpace: json |> optional(field("whiteSpace", string)),
    transition: json |> optional(field("transition", string)),
    opacity: json |> optional(field("opacity", int)),
    height: json |> optional(field("height", string)),
    width: json |> optional(field("width", string)),
    overflow: json |> optional(field("overflow", string)),
    textAlign: json |> optional(field("textAlign", string)),
  };

let decodeComponent = json : Types.component =>
  Json.Decode.{
    name: field("name", string, json),
    type_: json |> optional(field("type", string)),
    props: json |> optional(field("props", Json.Decode.(decodeProps))),
    style: json |> optional(field("style", Json.Decode.(decodeStyle))),
    examples: json |> field("examples", Json.Decode.array(string)),
    system: json |> optional(field("system", Json.Decode.array(string))),
    jsx: json |> optional(field("jsx", string)),
    keyword: json |> optional(field("keyword", Json.Decode.array(string))),
    imports: json |> optional(field("imports", Json.Decode.array(string))),
    description: json |> optional(field("description", string)),
  };

let decodeComponents = json : Types.components =>
  json |> Json.Decode.list(decodeComponent);

components |> decodeComponents |> Js.log;