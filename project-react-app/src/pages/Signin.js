import Header from '../components/Header'
import Meta from '../components/Meta'
import Form from 'react-bootstrap/Form';
import Button from 'react-bootstrap/Button';
const Signin = () => {
  // page content
  const pageTitle = 'Signin'
  const pageDescription = 'welcome to react bootstrap template'

  return (
    <div>
      <Meta title={pageTitle}/>
      <Header head={pageTitle} description={pageDescription} />
      <Form>
    <Form.Group className="mb-3" controlId="staffUser">
    <Form.Label>Username</Form.Label>
    <Form.Control type="username" placeholder="Enter Username" />
  </Form.Group>
  <Form.Group className="mb-3" controlId="staffPass">
    <Form.Label>Password</Form.Label>
    <Form.Control type="password" placeholder="Password" />
  </Form.Group>
  <Button variant="primary" type="submit">
    Submit
  </Button>
</Form>
    </div>
  )
}

export default Signin