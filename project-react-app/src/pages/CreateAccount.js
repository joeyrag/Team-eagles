import Header from '../components/Header'
import Meta from '../components/Meta'
import Form from 'react-bootstrap/Form';
import Button from 'react-bootstrap/Button';
const CreateAccount = () => {
  // page content
  const pageTitle = 'Create Account'
  const pageDescription = 'welcome to react bootstrap template'

  return (
    <div>
      <Meta title={pageTitle}/>
      <Header head={pageTitle} description={pageDescription} />
            <Form>
          {['radio'].map((type) => (
    <div key={`inline-${type}`} className="mb-3">
      <Form.Check
        inline
        label="Manager"
        name="group1"
        type={type}
        id={`inline-${type}-1`}
      />
      <Form.Check
        inline
        label="Employee"
        name="group1"
        type={type}
        id={`inline-${type}-2`}
      />
    </div>
  ))}
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

export default CreateAccount