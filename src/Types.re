type keyword = string;

type example = string;

type props = {
  src: option(string),
  w: option(int),
  mt: option(int),
  mb: option(int),
  my: option(int),
  fontSize: option(array(int)),
  fontWeight: option(string),
  color: option(string),
  borderColor: option(string),
  hover: option(hover),
  active: option(active),
}
and hover = {
  opacity: int,
  transition: string,
}
and active = {
  opacity: int,
  transition: string,
};

type style = {
  display: option(string),
  maxWidth: option(string),
  textTransform: option(string),
  letterSpacing: option(string),
  lineHeight: option(string),
  textDecoration: option(string),
  whiteSpace: option(string),
  transition: option(string),
  opacity: option(int),
  height: option(string),
  width: option(string),
  overflow: option(string),
  textAlign: option(string),
};

type component = {
  name: string,
  type_: option(string),
  props: option(props),
  style: option(style),
  examples: array(example),
  system: option(array(string)),
  imports: option(array(string)),
  jsx: option(string),
  keyword: option(array(keyword)),
  description: option(string),
};

type components = list(component);